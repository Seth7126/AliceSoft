// 函数: ??$_LStrcoll@G@std@@YAHPBG000PBU_Collvec@@@Z
// 地址: 0x6d67f3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t* eax = arg1
int16_t* ecx = arg3

while (true)
    if (eax == arg2)
        if (ecx != arg4)
            return 0xffffffff
        
        break
    
    if (ecx == arg4)
        break
    
    int16_t edx_1 = *eax
    int16_t esi_1 = *ecx
    
    if (edx_1 u< esi_1)
        return 0xffffffff
    
    if (esi_1 u< edx_1)
        return 1
    
    eax = &eax[1]
    ecx = &ecx[1]

int32_t result
result.b = eax != arg2
return result
