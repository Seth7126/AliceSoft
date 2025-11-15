// 函数: sub_4ef0f0
// 地址: 0x4ef0f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ecx = *(arg1 + 0x74)
int32_t result

if (ecx != 0)
    result = (*(*ecx + 8))(1)
    
    if (result == 0 || result == 1 || result == 2 || result == 3 || result == 4 || result == 5
            || result == 6 || result == 7 || result == 0xb || result == 0xc || result == 0xd
            || result == 0x17)
        result.b = 1
        return result

result.b = 0
return result
