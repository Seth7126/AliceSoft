// 函数: sub_10001f0c
// 地址: 0x10001f0c
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

*arg1 = &std::exception::`vftable'
int32_t eax = *(arg2 + 8)
arg1[2] = eax
char* eax_1 = *(arg2 + 4)
int32_t edi
int32_t var_10 = edi

if (eax == 0)
    arg1[1] = eax_1
else if (eax_1 == 0)
    arg1[1] = 0
else
    void* edi_2 = _strlen(eax_1) + 1
    void* eax_3 = sub_100037d7(edi_2)
    arg1[1] = eax_3
    
    if (eax_3 != 0)
        sub_10003cd0(eax_3, edi_2, *(arg2 + 4))

return arg1
