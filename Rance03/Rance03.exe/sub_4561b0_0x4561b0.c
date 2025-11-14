// 函数: sub_4561b0
// 地址: 0x4561b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = arg2
int32_t* edi = arg1
void** eax
int32_t* ecx
eax, ecx = sub_456210(arg1, ebx)

if (eax != *edi)
    char eax_2
    eax_2, ecx = sub_4560c0(ebx, &eax[4])
    
    if (eax_2 == 0)
        return &eax[8]

int32_t* var_10_2 = ecx
arg2 = ebx
int32_t** var_14 = &arg2
int32_t* eax_4 = sub_456280(ecx)
sub_4562b0(edi, &arg2, eax, &eax_4[4], eax_4)
return &arg2[8]
