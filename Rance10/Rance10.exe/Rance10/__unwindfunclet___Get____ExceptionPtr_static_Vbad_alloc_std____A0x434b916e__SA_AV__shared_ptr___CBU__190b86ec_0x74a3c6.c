// 函数: __unwindfunclet$?_Get@?$_ExceptionPtr_static@Vbad_alloc@std@@@?A0x434b916e@@SA?AV?$shared_ptr@$$CBU_EXCEPTION_RECORD@@@std@@XZ$0
// 地址: 0x74a3c6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 - 0x10) & 1

if (result == 0)
    return result

*(arg1 - 0x10) &= 0xfffffffe
return sub_403320(*(arg1 + 8)) __tailcall
