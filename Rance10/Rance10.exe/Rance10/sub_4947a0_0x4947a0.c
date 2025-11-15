// 函数: sub_4947a0
// 地址: 0x4947a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** edi = *arg1
void* ecx = edi
void** eax = edi[1]

if (*(eax + 0xd) == 0)
    int32_t esi_1 = *arg3
    
    do
        int32_t edx_1 = eax[4]
        
        if (edx_1 s>= esi_1)
            if (*(ecx + 0xd) != 0 && esi_1 s< edx_1)
                ecx = eax
            
            edi = eax
            eax = *eax
        else
            eax = eax[2]
    while (*(eax + 0xd) == 0)

void* eax_1 = ecx

if (*(ecx + 0xd) != 0)
    eax_1 = &edi[1]

void** eax_2 = *eax_1

while (*(eax_2 + 0xd) == 0)
    if (*arg3 s>= eax_2[4])
        eax_2 = eax_2[2]
    else
        ecx = eax_2
        eax_2 = *eax_2

*arg2 = edi
arg2[1] = ecx
return arg2
