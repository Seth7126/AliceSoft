// 函数: sub_58a430
// 地址: 0x58a430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi = 0
int32_t edi_2 = (arg2[1] - *arg2) s>> 3
int32_t result

if (edi_2 s> 0)
    do
        int32_t edx_1
        
        if (esi s>= 0)
            edx_1 = *arg2
        
        int32_t* edx_2
        
        if (esi s< 0 || esi s>= (arg2[1] - edx_1) s>> 3)
            edx_2 = nullptr
        else
            edx_2 = *(edx_1 + (esi << 3))
        
        int32_t ecx = *arg1
        
        if (esi s>= (arg1[1] - ecx) s>> 2)
            result.b = 0
            return result
        
        if (edx_2 != 0)
            void* ecx_1 = *(ecx + (esi << 2))
            
            if (ecx_1 == 0)
                result.b = 0
                return result
            
            int32_t var_14_1 = arg3
            
            if (sub_589750(ecx_1, edx_2).b == 0)
                result.b = 0
                return result
        else if (*(ecx + (esi << 2)) != edx_2)
            result.b = 0
            return result
        
        esi += 1
    while (esi s< edi_2)

result.b = 1
return result
