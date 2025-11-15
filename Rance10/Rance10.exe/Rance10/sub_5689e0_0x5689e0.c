// 函数: sub_5689e0
// 地址: 0x5689e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result = arg1

if (result == arg2)
    return result

do
    __Smtx_lock_shared(&result[1])
    int32_t edi_1 = *result
    __Smtx_unlock_shared(&result[1])
    
    if (edi_1 == 0)
        break
    
    result = &result[2]
while (result != arg2)

return result
