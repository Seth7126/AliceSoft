// 函数: sub_51aa20
// 地址: 0x51aa20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ecx
int32_t var_4 = ecx
int32_t edi = arg2[4]

if (edi == 0)
    sub_401f60(arg1, 0x6da677)
    return arg1

int32_t esi = arg2[5]
char* eax_1

if (esi u< 0x10)
    eax_1 = arg2
else
    eax_1 = *arg2

if (*eax_1 != 0x40)
    sub_401f60(arg1, 0x6da69f)
    return arg1

int32_t* eax_3

if (esi u< 0x10)
    eax_3 = arg2
else
    eax_3 = *arg2

if (*(eax_3 + edi - 1) != 0x40)
    sub_401f60(arg1, 0x6da6d3)
    return arg1

char* eax_5

if (esi u< 0x10)
    eax_5 = arg2
else
    eax_5 = *arg2

void* ecx_8

do
    eax_5 = &eax_5[1]
    int32_t* ecx_7
    
    if (esi u< 0x10)
        ecx_7 = arg2
    else
        ecx_7 = *arg2
    
    if (eax_5 == ecx_7 + edi)
        break
    
    ecx_8.b = *eax_5
    
    if (ecx_8.b == 0x40)
        break
while (ecx_8.b != 0x20)
int32_t* ecx_9

if (esi u< 0x10)
    ecx_9 = arg2
else
    ecx_9 = *arg2

sub_403070(arg2, arg1, 1, eax_5 - ecx_9 - 1)
return arg1
