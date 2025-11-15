// 函数: ?Alloc@SubAllocator@details@Concurrency@@QAEPAXI@Z
// 地址: 0x6f89f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = arg2 + 4
int32_t eax = Concurrency::details::SubAllocator::GetBucketIndex(esi_1)
int32_t* esi_2
int32_t var_14_1

if (eax == 0xffffffff)
    var_14_1 = esi_1
    esi_2 = sub_6e8787()
else
    esi_2 = Concurrency::details::AllocatorBucket::Alloc(arg1 + 4 + (eax << 3))
    
    if (esi_2 == 0)
        var_14_1 = *((eax << 2) + &data_7533a0)
        esi_2 = sub_6e8787()
*esi_2 = Concurrency::details::Security::EncodePointer(eax)
return &esi_2[1]
