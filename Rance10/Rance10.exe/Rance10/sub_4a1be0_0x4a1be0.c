// 函数: sub_4a1be0
// 地址: 0x4a1be0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4 = arg1

if ((*(*arg1 + 0x74))() == 0)
    return 1

arg1[0x7d].b = 0
*(arg1 + 0x121) = 1
sub_4a5040(&arg1[0x2f])

if (arg1[0x43] != 0)
    char eax_5 = (*(*arg1[0x43] + 0x10))()
    var_4:3.b = eax_5
    
    if (eax_5 != 0 && arg1[0x43] != 0)
        (*(*arg1[0x43] + 0x1c))()
else
    var_4:3.b = 0

if (sub_49e170(&arg1[-1]) != 0)
    *(arg1 + 0x1f5) = 0
    sub_49e1c0(&arg1[-1])
    Concurrency::details::ThreadScheduler::CreateVirtualProcessor(0)
    
    if (var_4:3.b == 0 || arg1[0x43] == 0)
    label_4a1c87:
        *(arg1 + 0x121) = 0
        arg1[0x7d].b = 1
        *(arg1 + 0x85) = 0
        return 1
    
    if ((*(*arg1[0x43] + 0x20))() != 0)
        goto label_4a1c87

return 0
