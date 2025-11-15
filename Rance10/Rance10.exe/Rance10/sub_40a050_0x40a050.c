// 函数: sub_40a050
// 地址: 0x40a050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 8)

for (int32_t* i = *(arg1 + 4); i != result; i = &i[1])
    void* ecx = *i
    
    if (*(ecx + 0x28) != 0 && *(ecx + 0x24) == arg2)
        if (*(ecx + 0x2c) != 0 && *(ecx + 0x40) != 0)
            sub_407200(ecx, arg3)
            result = sub_4072d0(*i, arg3)
        
        if (*(ecx + 0x2c) != 0 && *(ecx + 0x40) != 0 && result.b == 0)
            break
        
        result.b = 1
        return result

result.b = 0
return result
