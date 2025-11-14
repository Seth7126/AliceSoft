// 函数: sub_54e020
// 地址: 0x54e020
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
int32_t* edi = arg1
void** eax
int32_t* ecx
eax, ecx = sub_417ed0(arg1, ebx)

if (eax != *edi)
    char eax_2
    eax_2, ecx = sub_40c3a0(ebx, &eax[4])
    
    if (eax_2 == 0)
        return &eax[0xa]

int32_t* var_10_2 = ecx
arg2 = ebx
int32_t** var_14_2 = &arg2
int32_t* eax_4 = sub_458710(ecx)
sub_54f9d0(edi, &arg2, eax, &eax_4[4], eax_4)
return &arg2[0xa]
