
#include <AzCore/Memory/SystemAllocator.h>
#include <AzCore/Module/Module.h>

#include "BuongiornoSystemComponent.h"

namespace Buongiorno
{
    class BuongiornoModule
        : public AZ::Module
    {
    public:
        AZ_RTTI(BuongiornoModule, "{e43421b3-82a4-441f-899a-4b13610702c9}", AZ::Module);
        AZ_CLASS_ALLOCATOR(BuongiornoModule, AZ::SystemAllocator, 0);

        BuongiornoModule()
            : AZ::Module()
        {
            // Push results of [MyComponent]::CreateDescriptor() into m_descriptors here.
            m_descriptors.insert(m_descriptors.end(), {
                BuongiornoSystemComponent::CreateDescriptor(),
            });
        }

        /**
         * Add required SystemComponents to the SystemEntity.
         */
        AZ::ComponentTypeList GetRequiredSystemComponents() const override
        {
            return AZ::ComponentTypeList{
                azrtti_typeid<BuongiornoSystemComponent>(),
            };
        }
    };
}// namespace Buongiorno

AZ_DECLARE_MODULE_CLASS(Gem_Buongiorno, Buongiorno::BuongiornoModule)
