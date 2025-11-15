// 函数: ?Cancel@InternalContextBase@details@Concurrency@@MAEXXZ
// 地址: 0x6f8fe2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_c = arg1
int32_t* result

if (arg1[0x28] == 0)
    result = sub_6f09b1()
    
    if (result != &arg1[1])
        Concurrency::details::InternalContextBase::SpinUntilBlocked(arg1)
        Concurrency::details::InternalContextBase::Cleanup(arg1)
        return sub_6f083c(arg1[8])
    
    arg1[0x2c].b = 1
else
    arg1[0x2c].b = 1
    void* ecx = arg1[0x28]
    var_c = nullptr
    result = Concurrency::details::VirtualProcessor::ClaimExclusiveOwnership(ecx, &var_c, 0xf, 1)
    
    if (result.b != 0)
        return sub_6f7a7d(arg1, var_c, 0, nullptr)

return result
