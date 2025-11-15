// 函数: ?CheckOneShotStaticDestruction@SchedulerBase@details@Concurrency@@SAXXZ
// 地址: 0x6f04ed
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = data_7e1374
data_7e1374 -= 1
int32_t* result = eax - 1

if (result == 0x80000000)
    Concurrency::details::SchedulerBase::OneShotStaticDestruction()
    result = &data_7e1374
    data_7e1374 &= 0x7fffffff

return result
