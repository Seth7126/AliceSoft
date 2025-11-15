// 函数: ___scrt_release_startup_lock
// 地址: 0x6e8348
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = ___asan_report_present()

if (eax == 0 || arg1 != 0)
    return eax

int32_t temp0_1 = data_7fbef4
data_7fbef4 = 0
return temp0_1
