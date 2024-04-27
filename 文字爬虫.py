# 加载模块
import requests
from bs4 import BeautifulSoup

# 输入需要爬下来的内容网址，输完运行即可https://m.renrendoc.com/paper/217779014.html
url = 'https://wenku.baidu.com/view/f958e340463610661ed9ad51f01dc281e53a56b8.html?_wkts_=1708149705596&needWelcomeRecommand=1'
r = requests.get(url)
print(r.status_code)
if r.status_code == 200:
    print(r.apparent_encoding)
    print(r.encoding)
    r.encoding=r.apparent_encoding

    demo = r.text
    soup = BeautifulSoup(demo, 'html.parser')
    print("<body>")
    print(soup.find_all('p'))
    print("</body>")
else:
    print("404or403")
# 输出后复制，新建TXT文件，粘贴后按Ctrl+shift+s将txt文件改为所有文件，后缀改为html
