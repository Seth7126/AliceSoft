// 函数: ?RemoveFromUse@ExternalContextBase@details@Concurrency@@QAEXXZ
// 地址: 0x6fc039
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

Concurrency::details::ContextBase::ReleaseWorkQueue(arg1)
BOOL hObject = *(arg1 + 0xa4)

if (hObject != 0)
    hObject = CloseHandle(hObject)
    *(arg1 + 0xa4) = 0

return hObject
