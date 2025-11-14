// 函数: sub_4ccfb0
// 地址: 0x4ccfb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = *arg1
int32_t* edx = ebx
void** eax = ebx[1]
int32_t* ecx = eax

if (*(ecx + 0xd) == 0)
    int32_t edi_1 = *arg3
    
    do
        int32_t esi_1 = ecx[4]
        
        if (esi_1 s>= edi_1)
            if (*(edx + 0xd) != 0 && edi_1 s< esi_1)
                edx = ecx
            
            ebx = ecx
            ecx = *ecx
        else
            ecx = ecx[2]
    while (*(ecx + 0xd) == 0)

if (*(edx + 0xd) == 0)
    eax = *edx

while (*(eax + 0xd) == 0)
    if (*arg3 s>= eax[4])
        eax = eax[2]
    else
        edx = eax
        eax = *eax

*arg2 = ebx
arg2[1] = edx
return arg2
