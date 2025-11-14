// 函数: sub_530200
// 地址: 0x530200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = *(arg1 + 8)

for (int32_t* i = *(arg1 + 4); i != edi; i = &i[0x21])
    (**i)(0)

int32_t esi = 0
*(arg1 + 8) = *(arg1 + 4)
int32_t edi_3 = (*(arg2 + 0x50) - *(arg2 + 0x4c)) s>> 2
int32_t result

if (edi_3 s> 0)
    do
        if (sub_530270(arg1, arg2, esi, arg3).b == 0)
            result.b = 0
            return result
        
        esi += 1
    while (esi s< edi_3)

result.b = 1
return result
