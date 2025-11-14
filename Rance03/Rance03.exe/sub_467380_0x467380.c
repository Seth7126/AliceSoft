// 函数: sub_467380
// 地址: 0x467380
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax_4 = arg4
int32_t* edi = arg3
int32_t* ecx = *arg1

if (edi == *ecx && eax_4 == ecx)
    sub_43f340(arg1)
    *arg2 = *arg1
    return arg2

if (edi != eax_4)
    int32_t* esi_1
    
    do
        esi_1 = *edi
        *edi[1] = esi_1
        *(*edi + 4) = edi[1]
        arg1[1] -= 1
        (*edi[2])(0)
        j__free(edi)
        eax_4 = arg4
        edi = esi_1
        arg3 = edi
    while (esi_1 != eax_4)

*arg2 = eax_4
return arg2
