#include <gazebo/gazebo.hh>
#include <gazebo/physics/physics.hh>

namespace gazebo
{ class nav_plugin : public ModelPlugin
  {
    public: nav_plugin() {}
    public: virtual void Load(physics::ModelPtr _model, sdf::ElementPtr _sdf)
    {
      // Just output a message for now
      std::cerr << "\nThe velodyne plugin is attach to model[" <<
        _model->GetName() << "]\n";
    }
  };
    GZ_REGISTER_MODEL_PLUGIN(nav_plugin)
}