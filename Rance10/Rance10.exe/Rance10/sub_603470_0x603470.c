// 函数: sub_603470
// 地址: 0x603470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *arg1

if (eax == 0x12 || eax == 0x33 || eax == 0x5d)
    void* ecx = data_7fcbb4
    
    if (ecx != 0)
        void* eax_2 = sub_621720(ecx, arg1[2])
        
        if (eax_2 != 0)
            int32_t edx_1 = arg1[3]
            
            if (edx_1 u< *(eax_2 + 0x14) u>> 2)
                return *(eax_2 + 0x10) + (edx_1 << 2)

return 0
