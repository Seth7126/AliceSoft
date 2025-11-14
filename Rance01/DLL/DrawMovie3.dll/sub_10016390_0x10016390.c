// 函数: sub_10016390
// 地址: 0x10016390
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t* ecx = data_100214a0
int32_t* result

if (ecx != 0)
    result = data_100214b4
    
    if (result != 0)
        if (result[0x60].b == 0)
            result.b = 1
            return result
        
        result = (**ecx)(arg2)
        
        if (result != 0)
            return sub_10016810(result, data_100214b4) != 0

result.b = 0
return result
