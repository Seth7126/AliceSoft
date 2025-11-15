// 函数: ?CreateWithoutInitializing@SchedulerBase@details@Concurrency@@SAPAV123@ABVSchedulerPolicy@3@@Z
// 地址: 0x6f0816
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6f52a1(arg1)
Concurrency::details::SchedulerBase::CheckStaticConstruction()
struct Concurrency::IScheduler::VTable** eax = Concurrency::details::ThreadScheduler::Create(arg1)

if (eax == 0)
    return 0

return &eax[2]
