// 函数: sub_44cf30
// 地址: 0x44cf30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_5 = data_75dd60
int32_t* edi = arg1

if ((eax_5.b & 1) == 0)
    data_75dd54 = 0
    data_75dd60 = eax_5 | 1
    data_75dd58 = 0
    data_75dd5c = 0
    arg1 = _atexit(sub_6d1eb0)

int32_t* var_c = arg1
sub_44ef60(data_75d4cc + 0x29c)
int32_t eax_1 = data_75dd54

if (eax_1 != data_75dd58)
    *edi = eax_1
    *arg2 = (data_75dd58 - data_75dd54) s>> 2
    int32_t eax_4
    eax_4.b = 1
    return eax_4

*edi = 0
eax_1.b = 1
*arg2 = 0
return eax_1
