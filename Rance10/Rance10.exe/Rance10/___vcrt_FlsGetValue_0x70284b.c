// 函数: ___vcrt_FlsGetValue
// 地址: 0x70284b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = try_get_function(6, "FlsGetValue", 0x7538fc, 0x753904)

if (eax == 0)
    return TlsGetValue(arg1)

j_sub_4033e0()
return eax(arg1)
