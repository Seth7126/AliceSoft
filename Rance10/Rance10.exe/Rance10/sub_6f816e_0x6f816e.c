// 函数: sub_6f816e
// 地址: 0x6f816e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = *(arg1 + 4)
uint32_t esi_1 = arg2 u>> 5
int32_t edi = 1 << (arg2.b & 0x1f)
int32_t result = *(ebx + (esi_1 << 2))

if ((edi & result) != 0)
    int32_t var_c_1 = 0
    int32_t (* var_8_1)() = sub_6eb70e
    
    while (true)
        result = *(ebx + (esi_1 << 2))
        
        if ((edi & result) == 0)
            break
        
        void var_14
        Concurrency::details::_SpinWait<1>::_SpinOnce(&var_14)

return result
