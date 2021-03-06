Project = {};

Projects = function() {
	// internal shorthand
	var pub = {};
	// private
		// ...
	// setup inital state
	pub.init = function () {
	  pub.meta.base_url = '/pis/projects/';
	  using.register("documents", "/javascripts/views/documents.js");
		return pub;
	};
	// public vars
	pub.meta = {};
	// public methods
	pub.setup = function(instance) {
	  instance.subject = 'project';
	  instance.meta = APP.Helpers.meta(instance, pub.meta);
	  Project = instance;
	};
	pub.handleTab = function(tab, readonly, editable) {
	  tab = tab.replace(/#/,"");
	  tab_text = $j('#'+tab+'_tab_link').html();
	  switch(tab) {
      case 'files':
        using("documents", function(){
    	    Documents.setup(Project, readonly, editable);
    	  });
        break;    
      default:
        break;
    }
	};
	return pub;
}().init();