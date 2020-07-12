# -*- coding: utf-8 -*-
import requests
import time
import os
import sys
import argparse
from pathlib import Path
from selenium import webdriver
from selenium.common.exceptions import NoSuchElementException

HEADERS = {
    'Accept': '*/*',
    'Accept-Encoding': 'gzip,deflate,sdch',
    'Accept-Language': 'zh-CN,zh;q=0.8,gl;q=0.6,zh-TW;q=0.4',
    'Connection': 'keep-alive',
    'Content-Type': 'application/x-www-form-urlencoded',
    'Host': 'leetcode.com',
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/79.0.3945.88 Safari/537.36'
}

class LeetCode_crawler:
	def __init__(self,HEADERS):
		self.title=""
		self.url=""
		self.headers=HEADERS
		self.driver=""

	def crawler(self,url,test=0):
		session = requests.Session()
		session.headers.update(self.headers)
		options = webdriver.ChromeOptions()
		options.add_argument('--headless')
		options.add_argument('--disable-gpu')
		driverpath = "./init/driver/chromedriver.exe"
		self.url=url
		if(test):
			driver = webdriver.Chrome(executable_path=driverpath)
		else:
			driver = webdriver.Chrome(chrome_options=options,executable_path=driverpath)

		driver.get(url)
		while(1):
			try:
				self.title=driver.find_element_by_class_name('css-v3d350').text
				break
			except NoSuchElementException:
				continue

		self.driver=driver



	def MD_writer(self,path):
		fp = open(path, "w")
		fp.write("# ["+self.title+"]("+self.url+")\n\n")
		fp.write("## Description\n\n")
		fp.write(self.driver.find_element_by_class_name("content__u3I1").get_attribute('outerHTML'))
		fp.write("\n\n## Solution\n")
		fp.write("```text\n\n```\n\n")
		fp.write("_**Time complexity: O()**_\n\n")
		fp.write("## Summary\n")
		fp.close()
		self.driver.close()
		

	def short_title(self):
		s=''.join(self.title.title().split())
		sub='#'
		for i in range(4-s.find('.')):
			sub+='0'
		sub+=s
		sub=sub.replace('.','_')

		return sub

if __name__ == '__main__':
	parser = argparse.ArgumentParser()
	parser.add_argument('url', type=str, help='url of the LeetCode problem')

	parser.add_argument('-f','--folder',nargs='?', help='creat a file (default: #[number]_[problem name])',default=".")
	parser.add_argument('-c','--code', help='creat the empty code file')
	parser.add_argument('-v','--version', action='version', version='LeetCode_crawler 2.2')
	#parser.add_argument('-md','--MDwriter',action='store_true',help="generate a README.md prototype.")
	filename=""
	if len(sys.argv) > 1:
		args = parser.parse_args()
	else:
		parser.print_help()
		sys.exit(1)
	argsDict = vars(args)
	crawler=LeetCode_crawler(HEADERS)
	crawler.crawler(argsDict.get('url'))

	if(argsDict.get('folder')!='.'):
		if(argsDict.get('folder')==None):
			filename=crawler.short_title()
		else:
			filename=argsDict.get('folder')
		try:
			os.mkdir(filename)
			print("Build folder "+filename+" successfully.")
			
		except FileExistsError:
			print("\"",filename,"\" has existed.")
		finally:
			pass
		path=os.path.join(os.getcwd(),filename)
		if(argsDict.get('code')):
				fp = open(os.path.join(path,crawler.short_title()+'.'+argsDict.get('code')), "w")
				fp.close()
				print("Creat file "+crawler.short_title()+'.'+argsDict.get('code')+" successfully.")
	else:
		path=os.getcwd()
		if(argsDict.get('code')):
				fp = open(os.path.join(path,crawler.short_title()+'.'+argsDict.get('code')), "w")
				fp.close()
				print("Creat file "+crawler.short_title()+'.'+argsDict.get('code')+" successfully.")
	path=os.path.join(path,"README.md")
	crawler.MD_writer(path.replace('\\','/'))
	print("Create READE.md of "+filename+" successfully.")
