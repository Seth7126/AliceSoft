// 函数: sub_5b6140
// 地址: 0x5b6140
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg4
void* edi = arg2
void* eax = ecx - 1
void* var_4 = edi
void* ebx = edi
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(eax)
int32_t eax_2 = eax_1 - edx
int32_t edx_2 = eax_2 s>> 1

if (edi s< edx_2)
    do
        ebx = (ebx << 1) + 2
        eax_2 = ebx * 0x6c
        
        if (not(*(eax_2 + arg3 - 4) f<= *(eax_2 + arg3 + 0x68)))
            ebx -= 1
        
        __builtin_memcpy(edi * 0x6c + arg3, ebx * 0x6c + arg3, 0x6c)
        edi = ebx
    while (ebx s< edx_2)
    
    ecx = arg4

if (ebx == edx_2 && (ecx.b & 1) == 0)
    eax_2 = ecx * 0x6c
    ecx = __builtin_memcpy(edi * 0x6c + arg3, arg3 - 0x6c + eax_2, 0x6c)
    edi = eax

void* var_1c = ecx
return sub_5b6290(eax_2, edi, arg3, var_4, arg5)
