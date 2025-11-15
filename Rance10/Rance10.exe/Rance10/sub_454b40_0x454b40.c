// 函数: sub_454b40
// 地址: 0x454b40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg3
int32_t eax

if (edx s>= 0)
    int32_t esi_1 = *arg1
    
    if (edx s< (arg1[1] - esi_1) s>> 2)
        eax = esi_1 + (edx << 2)
        int32_t temp1_1
        
        do
            int32_t ecx = *eax
            
            if (ecx != 0xffffffff)
                *arg2 = ecx
                int32_t* eax_3
                eax_3.b = 1
                return eax_3
            
            eax -= 4
            temp1_1 = edx
            edx -= 1
        while (temp1_1 - 1 s>= 0)

eax.b = 0
return eax
