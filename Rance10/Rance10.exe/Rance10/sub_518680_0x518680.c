// 函数: sub_518680
// 地址: 0x518680
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2 = (*(**(*(arg1 + 0x44) + (arg2 << 2) + 0x7c) + 8))()
int32_t* result

if (eax_2 == 0x11)
    void* esi_3 = *(arg1 + 0x44)
    sub_555e00(esi_3, 0x11, arg2)
    result = *(esi_3 + (arg2 << 2) + 0x7c) + 0x24
label_5186eb:
    void* esi_4 = *result
    
    if (esi_4 != 0)
        int32_t* esi_5 = *(esi_4 + 0x118)
        
        if (esi_5 != 0)
            if ((*(*esi_5 + 0x10))() s<= 0)
                result.b = 1
                return result
            
            if ((*(*esi_5 + 0x14))() s<= 0)
                result.b = 1
                return result
else
    if (eax_2 == 0x18)
        void* esi_2 = *(arg1 + 0x44)
        sub_555e00(esi_2, 0x18, arg2)
        result = *(esi_2 + (arg2 << 2) + 0x7c) + 0xc
        goto label_5186eb
    
    if (eax_2 == 0x1a)
        void* esi_1 = *(arg1 + 0x44)
        sub_555e00(esi_1, 0x1a, arg2)
        
        if ((*(esi_1 + (arg2 << 2) + 0x7c))[0x1e] != 0)
            result.b = 1
            return result

result.b = 0
return result
