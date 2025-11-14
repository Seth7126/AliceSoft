// 函数: __FindAndUnlinkFrame
// 地址: 0x10002aab
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

void* result

if (arg1 != *(__getptd() + 0x98))
    result = *(__getptd() + 0x98)
    
    while (true)
        if (*(result + 4) == 0)
            noreturn sub_10006d2a() __tailcall
        
        void* result_1 = *(result + 4)
        
        if (arg1 == result_1)
            break
        
        result = result_1
    
    *(result + 4) = *(arg1 + 4)
else
    result = __getptd()
    *(result + 0x98) = *(arg1 + 4)

return result
