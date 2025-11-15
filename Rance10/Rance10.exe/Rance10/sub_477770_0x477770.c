// 函数: sub_477770
// 地址: 0x477770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_4_1 = arg1
int32_t eax

if (arg1 s>= 0)
    int32_t esi_1 = data_7fcc74
    
    if (arg1 u< (data_7fcc78 - esi_1) s>> 2)
        void* ecx = *(esi_1 + (arg1 << 2))
        
        if (ecx != 0)
            eax = sub_46aa00(ecx, arg2)
            
            if (eax != 0)
                *(eax + 0x34) = 2
                uint32_t eax_3
                int32_t xmm0_1
                eax_3, xmm0_1 = sub_462f40(arg3)
                *(eax + 0x40) = xmm0_1
                eax_3.b = 1
                return eax_3

eax.b = 0
return eax
