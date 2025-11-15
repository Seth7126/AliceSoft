// 函数: sub_6eb18e
// 地址: 0x6eb18e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t processAffinityMask = arg3
uint32_t systemAffinityMask = arg3

if (j_Concurrency::details::ResourceManager::Version() s< 4)
    GetProcessAffinityMask(GetCurrentProcess(), &processAffinityMask, &systemAffinityMask)
    arg5[1].w = 0
    *arg5 = processAffinityMask
else
    int32_t eax_1 = Concurrency::details::Security::EncodePointer(data_7fc28c)
    j_sub_4033e0()
    eax_1(arg4, arg5)

return 1
