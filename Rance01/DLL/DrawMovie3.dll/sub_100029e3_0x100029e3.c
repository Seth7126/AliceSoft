// 函数: sub_100029e3
// 地址: 0x100029e3
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ecx
int32_t var_8 = ecx
int32_t edi
int32_t var_14 = edi
void* edi_1 = arg1
int32_t eax = *(edi_1 + 0x10)
void* esi = *(edi_1 + 0xc)
void* ebx = esi

while (true)
    arg1 = esi
    
    while (true)
        if (arg2 s< 0)
            *arg4 = esi + 1
            *arg5 = ebx
            
            if (ebx u<= *(edi_1 + 0xc) && esi + 1 u<= ebx)
                return (esi + 1) * 0x14 + eax
            
            sub_10006d2a()
            noreturn
        
        if (esi == 0xffffffff)
            sub_10006d2a()
            noreturn
        
        esi -= 1
        void* eax_3 = esi * 0x14 + eax
        
        if ((*(eax_3 + 4) s>= arg3 || arg3 s> *(eax_3 + 8)) && esi != 0xffffffff)
            continue
        
        arg2 -= 1
        ebx = arg1
        break
