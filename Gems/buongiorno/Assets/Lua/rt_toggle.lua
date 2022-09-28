local RTToggle=
{
	Properties =
	    {
	    	UseRayTracing = {default = false, description="Include this entity in ray tracing calculations."}
	    }
}

function RTToggle:OnActivate()
	RenderMeshComponentRequestBus.Event.SetRayTracingEnabled(self.entityId , self.Properties.UseRayTracing)
end

return RTToggle