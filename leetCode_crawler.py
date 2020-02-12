# -*- coding: utf-8 -*-
import requests
import json
import time
import os
import sys
import logging
from pathlib import Path
from selenium import webdriver
from lxml import etree
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
		self.describe=""
		self.example=""
		self.functio_name=""
		self.url=""

	def crawler(self,url,test=0):
		session = requests.Session()
		session.headers.update(HEADERS)
		options = webdriver.ChromeOptions()
		options.add_argument('--headless')
		options.add_argument('--disable-gpu')
		if(test):
			driver = webdriver.Chrome()
		else:
			driver = webdriver.Chrome(chrome_options=options)
		
		driver.get(url)
		time.sleep(3)
		counter=0
		while(1):
			try:
				title=driver.find_element_by_xpath("//*[@id=\"app\"]/div/div[2]/div/div/div[1]/div/div[1]/div[1]/div/div[2]/div/div[1]/div[1]")
				print(title.text)
				self.title=title.text
				describe=driver.find_element_by_xpath("//*[@id=\"app\"]/div/div[2]/div/div/div[1]/div/div[1]/div[1]/div/div[2]/div/div[2]/div/p[1]")
				print(describe.text)
				self.describe=describe.text
				example=driver.find_element_by_xpath("//*[@id=\"app\"]/div/div[2]/div/div/div[1]/div/div[1]/div[1]/div/div[2]/div/div[2]/div/pre")
				print(example.text)
				self.example=example.text
				code=driver.find_element_by_xpath("//*[@id=\"app\"]/div/div[2]/div/div/div[3]/div/div[1]/div/div[2]/div/div/div[6]/div[1]/div/div/div/div[5]/div[3]/pre/span")
				print(code.text)
				self.functio_name=code.text
				break
			except NoSuchElementException:
				if(counter==1):
					break
				else:
					counter=1
				time.sleep(2)
				continue
			
			
		driver.close()

	def MD_writer(self,path):
		fp = open(path, "w")
		fp.write("# [")
		fp.write(self.title)
		fp.write("](")
		fp.write(self.url)
		fp.write(")\n\n")
		fp.write("## Description\n\n")
		fp.write(self.describe+"\n\n")
		fp.write("```example\n")
		fp.write(self.example+"\n")
		fp.write("```\n\n## Solution\n")
		fp.write("```text\n\n```\n\n")
		fp.write("## Summary\n")
		fp.close()
		
	def short_title(self):
		s=''.join(self.title.title().split())
		sub='#'
		for i in range(4-s.find('.')):
			sub+='0'
		sub+=s
		sub=sub.replace('.','_')
		return sub
		
		
if __name__ == '__main__':
	crawler=LeetCode_crawler(HEADERS)
	crawler.crawler("https://leetcode.com/problems/permutations/")
	try:
		os.mkdir(crawler.short_title())
	except FileExistsError:
		print("\"",crawler.short_title(),"\" has existed")
		
	path=os.path.join(os.getcwd(),crawler.short_title(),"README.md")
	crawler.MD_writer(path.replace('\\','/'))


#https://github.com/HUANGXUANKUN/leetcode-summary-generator