// 函数: sub_59f500
// 地址: 0x59f500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = arg2
int32_t result

while (true)
    if (esi s>= 0)
        int32_t eax
        int32_t edx_1
        edx_1:eax = muls.dp.d(0x4da637d, *(arg1 + 8) - *(arg1 + 4))
        int32_t edx_2 = edx_1 s>> 4
        
        if (esi s< (edx_2 u>> 0x1f) + edx_2)
            int32_t esi_1 = esi * 0x34c
            void* esi_2 = esi_1 + *(arg1 + 4)
            
            if (esi_1 != neg.d(*(arg1 + 4)) && arg3().b != 0)
                result = *(esi_2 + 0x330)
                
                if (result == 0xffffffff)
                    break
                
                esi = sub_5a3fa0(arg1, result)
                
                if (esi == 0xffffffff)
                    break
                
                continue
    
    result.b = 0
    return result

result.b = 1
return result
