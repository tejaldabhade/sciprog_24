import requests

response = requests.get("http://api.worldbank.org/v2/country/id?format=json")
indonesia_info = response.json()
print(indonesia_info)
