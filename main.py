#sinf ishi 1 
# import random
# a = random.randint(1, 100)
# while True:
#     try:
#         s = int(input("1 dan 100 gacha bo'lgan son kiriting: "))
#         if s < a:
#             print("Siz kiritgan son kichik!")
#         elif s > a:
#             print("Siz kiritgan son katta!")
#         else:
#             print("To'g'ri topdingiz!")
#             break
#     except ValueError:
#         print("Bu son emas!")
#sinf ishi 2
# from datetime import datetime, timedelta
# a = datetime.now()
# b = a - timedelta(1)
# print(f"hozirgi sana va vaqt: {a}")
# print(f"kechagi san va vaqt{b}")
#sinf ishi 3 
# try:
#     a = int(input("Butun son kiriting "))
#     print(f"siz butun son kirittingiz {a}")
# except ValueError:
#     print("Bu son emas!")
#sinf ishi 4 
# list = (input("Sonlar:"))
# try:
#     print(list[4])
# except ValueError:
#     print("Noto'g'ri qiymat kiritdingiz")
# except IndexError:
#     print("Mavjud bo'lmagan index ishlatildi")
#sinf ishi 5 
# try:
#     a = int(input("Birinchi qiymatni kiriting: "))
#     b = int(input("Ikkinchi qiymatni kiriting: "))
#     natija = a / b
#     print(f"Natija: {natija}")
# except ZeroDivisionError:
#     print("Nolga bo'lish mumkin emas")
# except ValueError:
#     print("Bu son emas!")
# except TypeError:
#     print("Ikkala qiymat ham son bo'lishi kerak")
#uy ihsi 1
# def birlashtirish(a, b, d):
#     natija = [{a[i]: {b[i]: d[i]}} for i in range(len(a))]
#     return natija
# a = ['S001', 'S002', 'S003', 'S004']
# b = ['Adina Park', 'Leyton Marsh', 'Duncan Boyle', 'Saim Richards']
# d = [85, 98, 89, 92]

# print(birlashtirish(a, b, d))
#uy ishi 2 
# def belgi(s):
#     result = {}
#     for char in s:
#         result[char] = result.get(char, 0) + 1
#     return result
# s = 'muham2ad6*yusu01+f'
# print(belgi(s))
#uy ishi 3 
# def almashtirish(dict1):
#     for i in range(1, len(dict1), 2):
#         dict1[i], dict1[i+1] = dict1[i+1], dict1[i]
#     return dict1
# dict1 = {1: "abc", 2: "def", 3: "ghi", 4: "jkl", 5: "mno"}
# print(almashtirish(dict1))
#uy ishi 4 
# def gaplar(s):
#     a = s.replace(".", "").split()
#     b = [sent.strip() for sent in s.split('.') if sent]
#     return a, b
# s = "Salom Yoz. Olam juda ham go'zal. Imtihon bo'lyapti."
# a, b = gaplar(s)
# print("Words:", a)
# print("Sentences:", b)
#uy ishi 5
# def katta_son(list1, list2):
#     list1 = sorted(list1, reverse=True)
#     list2 = sorted(list2, reverse=True)
#     son1 = ''.join(map(str, list1))
#     son2 = ''.join(map(str, list2))
#     return int(son1), int(son2)
# list1 = [1, 2, 3]
# list2 = [61, 228, 9]
# print(katta_son(list1, list2))
#uy ihsi 6 
# def listdan_dict_qilish(listlar):
#     natija = {item[0]: item[1:] for item in listlar}
#     return natija
# listlar = [[1, 'Jean Castro', 'V'], [2, 'Lula Powell', 'V'], [3, 'Brian Howell', 'VI'], [4, 'Lynne Foster', 'VI'], [5, 'Zachary Simon', 'VII']]
# print(listdan_dict_qilish(listlar))
#uy ishi 7 
# def juft(b):
#     natija = [a for a in list if str(a)[0] in '02468']
#     return natija
# b = [123, 456, 789, 852, 12, 42, 61, 369]
# print(juft(list))
#uy ishi 8
def son(son1):
    birliklar = ["", "bir", "ikki", "uch", "to'rt", "besh", "olti", "yetti", "sakkiz", "to'qqiz"]
    onlar = ["", "o'n", "yigirma", "o'ttiz", "qirq", "ellik", "oltimish", "yetmish", "sakson", "to'qson"]
    yuzlar = ["", "yuz", "ikki yuz", "uch yuz", "to'rt yuz", "besh yuz", "olti yuz", "yetti yuz", "sakkiz yuz", "to'qqiz yuz"]
    a = son1 % 10
    b = (son1 // 10) % 10
    d = (son1 // 100) % 10
    result = yuzlar[d] + " " + onlar[b] + " " + birliklar[a]
    return result.strip()
son1 = 348
print(son(son1))

