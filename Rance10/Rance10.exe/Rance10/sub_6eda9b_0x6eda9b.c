// 函数: sub_6eda9b
// 地址: 0x6eda9b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
struct Concurrency::ITopologyNode::Concurrency::details::GlobalNode::TopologyObject::VTable** eax =
    sub_6e810c(8)
int32_t ebx = 0
struct Concurrency::ITopologyNode::Concurrency::details::GlobalNode::TopologyObject::VTable** 
    var_8_1 = eax

if (eax == 0)
    eax = nullptr
else
    *eax = &Concurrency::details::GlobalNode::TopologyObject::`vftable'{for `Concurrency::ITopologyNode'}
    eax[1] = arg1

arg1[9] = eax
arg1[6] = arg2
arg1[4] = zx.d(arg3)
arg1[3] = zx.d(arg4)
*arg1 = arg5

if (arg6 != 0)
    arg1[1] = arg6
else
    uint32_t (* i)[0x4] = arg5
    int32_t edx_1 = 0
    
    if (arg5 != 0)
        do
            edx_1 += 1
            i &= i - 1
        while (i != 0)
    
    arg1[1] = zx.d(edx_1.w)

int32_t edi = arg1[1]
arg1[2] = 0
int32_t ecx_2
ecx_2.b = mulu.dp.d(edi, 0x24) u>> 0x20 != 0
int32_t ecx_4 = neg.d(ecx_2) | (edi * 0x24)
int32_t eax_9
eax_9.b = ecx_4 u>= 0xfffffffc
int32_t var_18 = neg.d(eax_9) | (ecx_4 + 4)
int32_t* eax_12 = sub_6e8787()
void* ecx_7

if (eax_12 == 0)
    ecx_7 = nullptr
else
    *eax_12 = edi
    ecx_7 = &eax_12[1]

void* eax_13 = arg1[1] * 0x24
arg1[8] = ecx_7
uint32_t (* result)[0x4] = _memset(ecx_7, 0, eax_13)
int32_t i_1 = 0

if (arg1[1] u> 0)
    result = arg5
    int32_t edi_1 = 0
    int32_t ecx_8 = arg6
    
    do
        char var_18_2
        int32_t i_2
        int32_t eax_14
        void* ecx_10
        
        if (ecx_8 != 0)
            result.b = arg7
            result.b += ebx.b
            ecx_10 = arg1[8] + edi_1
            var_18_2 = result.b
            i_2 = i_1 + 1
            eax_14 = (arg1[3] << 8) + zx.d(arg3)
        label_6edb8f:
            edi_1 += 0x24
            Concurrency::details::GlobalCore::Initialize(ecx_10, arg1, (eax_14 << 8) + ebx, 
                var_18_2)
            ecx_8 = arg6
            i_1 = i_2
            result = arg5
        else if ((result.b & 1) != 0)
            eax_14 = arg1[3]
            ecx_10 = arg1[8] + edi_1
            i_2 = i_1 + 1
            var_18_2 = ebx.b
            goto label_6edb8f
        result u>>= 1
        ebx += 1
        arg5 = result
    while (i_1 u< arg1[1])

return result
