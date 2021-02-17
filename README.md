![cover_logo](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/quran_cloud.jpg?raw=true "")

**_QC_**_Parser_ is API Parser for **[QuranCloud](https://alquran.cloud/) service**
It is specifically made for parsing _JSON_ data of Quran cloud format and provides efficient methods to
parse data easily and it works with data of all API(s) like **_Quran-API,Edition-API,Juz-API,Surah-API,Ayah-API,Search-API_** and more.

**NOTE** : This is **Parser** and works on **OFFLINE** JSON data, **IT DOES NOT CONNECT TO _QuranCloud_ SERVER TO FETCH DATA.**.
**FEATURE TO FETCH DATA ONLINE FROM API WILL BE ADDED IN FUTURE VERSRIONS IN SHA ALLAH**
 
**AIM** : The aim of this Parser is to make easy to parse QuranCloud API with ready-made code available with efficient methods that ease your most of the work.

# Features :
1)**_Light weight_**,quick and memory efficient Parser.</br>
2)Search for all keys,values and other data easily.</br>
3)Automatically detects all **errors** from **JSON and API side**.</br>
4)Uses only **one method** in background to search,print and get data and tokens.</br>
5)Wrapped all **API-Methods** to JSON-Parser for **_immense speed_**.</br>
6)Works with all **APIs** of **QuranCloud**. including **_(Edition-API,Quran-API,Juz-API,Surah-API,Ayah-API,Search-API)_**.</br>
7)Portability to work on every **major OS** like **_Windows,Linux,Mac_** etc because it uses only **standard libraries**.</br>

# Parser Components :

## Searching tokens : 

Using **QC_SearchToken()** method.

![searching_token](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/search_token.jpg?raw=true "")


Using **QC_SearchTokens()** method.

![searching_tokens](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/search_tokens.jpg?raw=true "")

## Printing tokens : 

Using **QC_PrintAllTokens()** method.

![printing_all_token](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/all_tokens.jpg?raw=true "")


Using **QC_PrintAllKeys()** method.

![printing_all_keys](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/all_keys.jpg?raw=true "")

Using **QC_PrintAllValues()** method.

![printing_all_values](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/all_values.jpg?raw=true "")


## Reading JSON Data : 

Using **QC_ReadJSON()** method.

![read_json](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/read_file.jpg?raw=true "")

# QuranCloud API Components :

## Get Ayah Text and Number : 

Using **QC_API_GetAyahText()** method.</br>

![ayah_text](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/ayah_text.jpg?raw=true "")

Using **QC_API_GetAyahNumber()** method.</br>

![ayah_number](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/ayah_number.jpg?raw=true "")

## Get Surah Name and Number : 

Using **QC_API_GetSurahName()** method for arabic/english names.</br>

Surah name in **ARABIC**.</br>

![surah_name_arabic](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/surah_name_arabic.jpg?raw=true "")

Surah name in **ENGLISH**.</br>

![surah_name_english](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/surah_name_english.jpg?raw=true "")

Surah name in **ENGLISH-ARABIC**.</br>

![surah_name_eng_arabic](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/surah_name_eng_arabic.jpg?raw=true "")

Using **QC_API_GetSurahNumber()** method.</br>

![surah_number](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/surah_number.jpg?raw=true "")

## Get Ruku/Juz/Manzil/Hizb/Sajda : 

Using **QC_API_GetRuku()** method for Ruku number.</br>

![ruku_number](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/ruku_number.jpg?raw=true "")

Using **QC_API_GetJuz()** method for Juz number.</br>

![juz_number](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/juz_number.jpg?raw=true "")

Using **QC_API_GetManzil()** method for Manzil number.</br>

![manzil_number](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/manzil_number.jpg?raw=true "")

Using **QC_API_GetHizb()** method for Hizb number.</br>

![hizb_number](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/hizb_number.jpg?raw=true "")

Using **QC_API_GetSajda()** method for sajda.</br>

![sajda](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/sajda.jpg?raw=true "")

## Get Revelation type : 
Using **QC_API_GetRevelationType()** method.</br>

![revelation_type](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/revelation_type.jpg?raw=true "")


## Get Page Number And Language: 

Using **QC_API_GetPageNumber()** method.</br>

![page_number](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/page_number.jpg?raw=true "")

Using **QC_API_GetLanguage()** method.</br>

![language](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/language.jpg?raw=true "")


# QC-API Error handling :

Automatically detects all **ERRORS** from **_JSON and API side_**, and shows with relevant **error messages**.</br>

**Empty JSON string** .</br>
![empty_error](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/empty_error.jpg?raw=true "")

**Invalid API status code** .</br>
![status_code_error](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/status_code_error.jpg?raw=true "")

**Missing API status code/type** .</br>
![status_not_found_error](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/status_not_found_error.jpg?raw=true "")
![code_not_found_error](https://github.com/haseeb-heaven/QC-API-Parser/blob/master/resources/code_not_found_error.jpg?raw=true "")

**DOCUMENTATION INFO :**
All Public and Semi-Private methods are well documented.
but private methods are not documented as it was not necessary to do so.
