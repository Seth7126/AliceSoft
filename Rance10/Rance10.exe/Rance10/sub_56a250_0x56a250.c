// 函数: sub_56a250
// 地址: 0x56a250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
void* eax = esi[1]

if (arg2 u< eax)
    arg1 = *esi

if (arg2 u>= eax || arg1 u> arg2)
    if (eax == esi[2])
        int32_t* var_c_3 = arg1
        eax = sub_56a2c0(esi)
    
    int32_t* ecx_3 = esi[1]
    
    if (ecx_3 != 0)
        eax = std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
            ecx_3, arg2)
else
    if (eax == esi[2])
        int32_t* var_c_1 = arg1
        eax = sub_56a2c0(esi)
    
    int32_t* ecx_1 = esi[1]
    
    if (ecx_1 != 0)
        int32_t* eax_3 = std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
            ecx_1, *esi + ((arg2 - arg1) s>> 3 << 3))
        esi[1] += 8
        return eax_3

esi[1] += 8
return eax
