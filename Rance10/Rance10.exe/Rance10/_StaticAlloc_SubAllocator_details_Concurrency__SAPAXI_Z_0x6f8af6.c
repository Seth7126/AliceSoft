// 函数: ?StaticAlloc@SubAllocator@details@Concurrency@@SAPAXI@Z
// 地址: 0x6f8af6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg1 + 4
int32_t eax = Concurrency::details::SubAllocator::GetBucketIndex(esi_1)

if (eax != 0xffffffff)
    esi_1 = *((eax << 2) + &data_7533a0)

int32_t var_10_1 = esi_1
int32_t* eax_1 = sub_6e8787()
*eax_1 = Concurrency::details::Security::EncodePointer(eax)
return &eax_1[1]
