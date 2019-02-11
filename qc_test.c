/*QC-QuranCloud : "https://alquran.cloud/api"*/
#include "qc_api_parser.h"
#include "qc_api_parser.c"

int main()
{
    /*Uncomment this to read data from file.*/
    //char *json_string = QC_ReadJSON("qc_data.json");

    /*JSON string from "Quran cloud" */
    char *json_string = "{\"code\":200,\"status\":\"OK\",\"data\":{\"count\":4,\"matches\":[{\"number\":499,\"text\":\"Wabtalul yataamaa hattaaa izaa balaghun nikaaha fa in aanastum minhum rushdan fad fa'ooo ilaihim amwaalahum wa laa taa kuloohaaa israafanw wa bidaaran ai yakbaroo; wa mai kaana ghaniyyan falyasta' fif wa mai kaana faqeeran falyaakul bilma'roof; fa izaa dafa'tum ilaihim amwaalahum fa'ashhidoo 'alaihim; wa kafaa billaahi Haseeba\",\"edition\":{\"identifier\":\"en.transliteration\",\"language\":\"en\",\"name\":\"Transliteration\",\"englishName\":\"English Transliteration\",\"type\":\"transliteration\"},\"surah\":{\"number\":4,\"name\":\"\u0633\u0648\u0631\u0629 \u0627\u0644\u0646\u0633\u0627\u0621\",\"englishName\":\"An-Nisaa\",\"englishNameTranslation\":\"The Women\",\"revelationType\":\"Medinan\"},\"numberInSurah\":6}]}}";

    /*Search text token.*/
    printf("\nAll AAYAH TEXT : \n");
    QC_SearchToken(json_string,"text");

    /*Get surah name in arabic.*/
    printf("\nSURAH NAME IN ARABIC : \n");
    QC_API_GetSurahName(json_string,SURAH_ENG_ARABIC);

    /*Get surah name in english.*/
    printf("\nSURAH NAME IN ENGLISH : \n");
    QC_API_GetSurahName(json_string,SURAH_ENGLISH);

    /*Get ayah number.*/
    printf("\nAYAH NUMBER : \n");
    QC_API_GetAyahNumber(json_string);

    /*Get information where surah was revealed .*/
    printf("\nREVEALED IN : \n");
    QC_API_GetRevelationType(json_string);

     /*Get language of ayah.*/
    printf("\nTEXT LANGUAGE : \n");
    QC_API_GetLanguage(json_string);

    return 0;
}
