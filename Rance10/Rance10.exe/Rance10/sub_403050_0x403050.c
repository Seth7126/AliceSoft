// 函数: sub_403050
// 地址: 0x403050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *arg1
int32_t esi = *arg2

if (result s<= esi)
    if (result s< esi)
        result.b = 0
        return result
    
    result = arg1[1]
    int32_t esi_1 = arg2[1]
    
    if (result s<= esi_1)
        if (result s< esi_1)
            result.b = 0
            return result
        
        result = arg1[2]
        int32_t esi_2 = arg2[2]
        
        if (result s<= esi_2 && (result s< esi_2 || arg1[3] s<= arg2[3]))
            result.b = 0
            return result

result.b = 1
return result
