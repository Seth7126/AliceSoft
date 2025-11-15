// 函数: ?_Init@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IAEXABV_Locinfo@2@@Z
// 地址: 0x6dcf6b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t (* var_8)[0x4] = arg1
uint32_t* eax = std::_Locinfo::_W_Gettnames(&var_8)
(*arg1)[2] = *eax
*eax = 0
return _free(var_8)
