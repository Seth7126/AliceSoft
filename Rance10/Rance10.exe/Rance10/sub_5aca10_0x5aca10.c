// 函数: sub_5aca10
// 地址: 0x5aca10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4 = arg1
int32_t eax = *(arg1 + 8)

if (eax == 0)
    return sub_597600(arg1 + 0x480, arg2)

if (eax == 1)
    void* ecx_3 = *(arg1 + 0x55c)
    
    if (ecx_3 != 0)
        return sub_595eb0(ecx_3, arg2)
else if (eax == 2)
    int32_t** esi_1 = *(arg1 + 0x568)
    int32_t edi_1 = *(arg1 + 0x56c)
    
    if (esi_1 != edi_1)
        do
            if (sub_57b130(*esi_1, arg2) == 0)
                return 0
            
            esi_1 = &esi_1[1]
        while (esi_1 != edi_1)
        
        return 1

int32_t result
result.b = 1
return result
