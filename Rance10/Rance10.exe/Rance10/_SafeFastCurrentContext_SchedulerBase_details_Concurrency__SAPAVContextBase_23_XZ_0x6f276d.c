// 函数: ?SafeFastCurrentContext@SchedulerBase@details@Concurrency@@SAPAVContextBase@23@XZ
// 地址: 0x6f276d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((data_7e1374 & 0x80000000) == 0)
    return 0

return Concurrency::details::platform::__TlsGetValue(data_7fc2ec)
