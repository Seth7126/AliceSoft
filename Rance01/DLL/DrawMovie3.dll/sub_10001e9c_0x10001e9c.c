// 函数: sub_10001e9c
// 地址: 0x10001e9c
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t edi
int32_t var_10 = edi
*arg1 = &std::exception::`vftable'
char* eax = *arg2

if (eax == 0)
    arg1[1] = 0
else
    void* esi_2 = _strlen(eax) + 1
    void* eax_2 = sub_100037d7(esi_2)
    arg1[1] = eax_2
    
    if (eax_2 != 0)
        sub_10003cd0(eax_2, esi_2, *arg2)

arg1[2] = 1
return arg1
