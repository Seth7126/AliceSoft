// 函数: sub_706b0a
// 地址: 0x706b0a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__flushall()
__fcloseall()

for (int32_t* i = nullptr; i != 0xc; i = &i[1])
    ___acrt_stdio_free_buffer_nolock(*(i + data_7fc478))
    DeleteCriticalSection(*(i + data_7fc478) + 0x20)

int32_t result = __free_base(data_7fc478)
data_7fc478 = 0
return result
