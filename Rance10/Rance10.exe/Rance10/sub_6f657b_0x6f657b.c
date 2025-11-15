// 函数: sub_6f657b
// 地址: 0x6f657b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 4) == 0)
    *(arg1 + 4) = Concurrency::details::ThreadProxyFactoryManager::GetFreeThreadProxyFactory(
        *(arg1 + 0xc) + 0x68)

int32_t var_10 = *(arg1 + 0x98)
int32_t var_14 = *(arg1 + 0x94)
int32_t esi_1 = ***(arg1 + 4)
j_sub_4033e0()
void* result = esi_1(var_14, var_10)
sub_6fd174(result, arg2)
return result
